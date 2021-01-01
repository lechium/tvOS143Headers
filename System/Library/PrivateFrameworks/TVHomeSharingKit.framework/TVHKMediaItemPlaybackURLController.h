/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface TVHKMediaItemPlaybackURLController : NSObject {

	NSCache* _DAAPPlaybackURLCache;
	NSCache* _DPAPPlaybackURLCache;

}

@property (nonatomic,retain) NSCache * DAAPPlaybackURLCache;              //@synthesize DAAPPlaybackURLCache=_DAAPPlaybackURLCache - In the implementation block
@property (nonatomic,retain) NSCache * DPAPPlaybackURLCache;              //@synthesize DPAPPlaybackURLCache=_DPAPPlaybackURLCache - In the implementation block
+(id)_playbackURLCacheKeyWithItemID:(unsigned long long)arg1 itemFormat:(id)arg2 ;
-(id)init;
-(NSCache *)DAAPPlaybackURLCache;
-(NSCache *)DPAPPlaybackURLCache;
-(id)_DMAPPlaybackURLStringWithItemID:(unsigned long long)arg1 databaseID:(unsigned)arg2 itemFormat:(id)arg3 sessionID:(unsigned)arg4 ;
-(id)_signedURLWithURLPathString:(id)arg1 baseURL:(id)arg2 sessionState:(id)arg3 ;
-(id)playbackURLForMediaItem:(id)arg1 baseURL:(id)arg2 sessionState:(id)arg3 ;
-(void)clearCachedURLs;
-(void)setDAAPPlaybackURLCache:(NSCache *)arg1 ;
-(void)setDPAPPlaybackURLCache:(NSCache *)arg1 ;
@end

