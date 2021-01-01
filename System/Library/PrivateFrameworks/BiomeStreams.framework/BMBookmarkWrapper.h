/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BMBookmarkWrapper : BPSPublisher {

	BPSPublisher* _upstream;
	id _initialState;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id initialState;                      //@synthesize initialState=_initialState - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id)initialState;
-(BPSPublisher *)upstream;
-(id)withBookmark:(id)arg1 ;
-(id)bookmarkableUpstreams;
-(id)initWithUpstream:(id)arg1 initialState:(id)arg2 ;
@end
