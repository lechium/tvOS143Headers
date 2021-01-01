/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation {

	BOOL _requirePreferredAssetQuality;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (assign,nonatomic) BOOL requirePreferredAssetQuality;                                           //@synthesize requirePreferredAssetQuality=_requirePreferredAssetQuality - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setRequirePreferredAssetQuality:(BOOL)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(BOOL)requirePreferredAssetQuality;
@end

