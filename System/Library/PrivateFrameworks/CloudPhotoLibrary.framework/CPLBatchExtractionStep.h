/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLBatchExtractionStrategyStorage;
@class NSString;

@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeIdentifier;                            //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(id)description;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(void)reset;
-(id)shortDescription;
-(NSString *)scopeIdentifier;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
@end

