/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RawCamera/RawCamera-Structs.h>
@interface FujiSuperCCDReconstructionImageProvider : NSObject {

	shared_ptr<CRawImageFujiBase>* image;
	weak_ptr<CRawImageFujiBase>* imageWeak;
	reconstructionDataV2_s reconstructionData;
	BOOL _retainedImage;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)initWithRawImage:(shared_ptr<CRawImageFujiBase>*)arg1 shouldRetainRawImage:(BOOL)arg2 ;
@end
