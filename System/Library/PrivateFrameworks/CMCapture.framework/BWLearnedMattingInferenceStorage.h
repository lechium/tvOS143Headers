/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWInferenceProviderStorage.h>

@class NSArray;

@interface BWLearnedMattingInferenceStorage : BWInferenceProviderStorage {

	NSArray* _espressoStorages;

}

@property (nonatomic,readonly) NSArray * espressoStorages;              //@synthesize espressoStorages=_espressoStorages - In the implementation block
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 espressoStorages:(id)arg3 ;
-(NSArray *)espressoStorages;
@end

