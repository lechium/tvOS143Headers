/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VUIStreamingBookmarkCache : NSObject {

	NSMutableDictionary* _bookmarkCacheStore;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(BOOL)resumeTimeAndTimestampByCanonical:(id)arg1 serverResumeTime:(id)arg2 serverBookmarkTimestamp:(id)arg3 mostRecentResumeTime:(id*)arg4 mostRecentBookmarkTimestamp:(id*)arg5 ;
-(void)resumeTimeInfoByCanonical:(id)arg1 outAbsoluteResumeTime:(id*)arg2 outAbsoluteTimestamp:(id*)arg3 outMainContentRelativeResumeTime:(id*)arg4 outMainContentRelativeTimestamp:(id*)arg5 ;
-(void)addBookmark:(id)arg1 absoluteResumeTime:(id)arg2 absoluteBookmarkTimestamp:(id)arg3 relativeResumeTime:(id)arg4 relativeBookmarkTimestamp:(id)arg5 ;
-(void)removeBookmark:(id)arg1 ;
@end

