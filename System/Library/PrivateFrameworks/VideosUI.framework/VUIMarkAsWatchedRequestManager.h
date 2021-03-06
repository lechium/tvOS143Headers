/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VUIMarkAsWatchedRequestManager : NSObject {

	NSMutableDictionary* _ongoingItemIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingItemIDOperationDictionary;              //@synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 adamID:(id)arg4 ;
-(NSMutableDictionary *)ongoingItemIDOperationDictionary;
-(void)setOngoingItemIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

