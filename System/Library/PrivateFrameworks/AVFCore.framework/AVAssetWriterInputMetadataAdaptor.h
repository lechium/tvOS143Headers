/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(void)initialize;
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(AVAssetWriterInput *)assetWriterInput;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
@end
