/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {

	NSMutableArray* _urlSessions;
	NSMutableArray* _lastUsedDates;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)urlSessionForRequest:(id)arg1 ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2 ;
-(void)addSession:(id)arg1 ;
-(id)urlSessionForIdentifier:(id)arg1 ;
@end
