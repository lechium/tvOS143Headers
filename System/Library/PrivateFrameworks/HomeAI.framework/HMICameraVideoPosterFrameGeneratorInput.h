/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HomeAI/HomeAI-Structs.h>
@interface HMICameraVideoPosterFrameGeneratorInput : NSObject {

	unsigned long long _frameHeight;
	SCD_Struct_HM3 _generationFrequency;

}

@property (readonly) SCD_Struct_HM3 generationFrequency;              //@synthesize generationFrequency=_generationFrequency - In the implementation block
@property (readonly) unsigned long long frameHeight;                  //@synthesize frameHeight=_frameHeight - In the implementation block
-(id)initWithGenerationFrequency:(SCD_Struct_HM3)arg1 andPosterFrameHeight:(unsigned long long)arg2 ;
-(SCD_Struct_HM3)generationFrequency;
-(unsigned long long)frameHeight;
@end

