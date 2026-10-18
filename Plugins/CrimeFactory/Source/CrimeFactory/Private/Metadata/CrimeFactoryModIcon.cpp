#include "Metadata/CrimeFactoryModIcon.h"

#include "Brushes/SlateDynamicImageBrush.h"
#include "ImageUtils.h"
#include "Misc/FileHelper.h"

TSharedPtr<FSlateDynamicImageBrush> CrimeFactoryModIcon::Load(const FString& Filename)
{
    TArray<uint8> Compressed;
    FImage Decoded;
    if (!FFileHelper::LoadFileToArray(Compressed, *Filename) || !FImageUtils::DecompressImage(Compressed.GetData(), Compressed.Num(), Decoded)) return nullptr;
    if (Decoded.SizeX <= 0 || Decoded.SizeY <= 0 || Decoded.NumSlices != 1) return nullptr;
    Decoded.ChangeFormat(ERawImageFormat::BGRA8, EGammaSpace::sRGB);
    TArray<uint8> Bytes;
    Bytes.Append(Decoded.RawData.GetData(), Decoded.RawData.Num());
    return FSlateDynamicImageBrush::CreateWithImageData(FName(*(TEXT("CrimeFactory.ModIcon.") + FGuid::NewGuid().ToString(EGuidFormats::Digits))),
        FVector2D(Decoded.SizeX, Decoded.SizeY), Bytes);
}
