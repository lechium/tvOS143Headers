/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface VNBlurSignature : NSObject {

	void* _signatureData;

}
+(id)computeBlurSignatureForGrayscaleImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithSignatureData:(void*)arg1 ;
-(void)setSignatureData:(void*)arg1 ;
-(void*)getSignatureData;
@end
