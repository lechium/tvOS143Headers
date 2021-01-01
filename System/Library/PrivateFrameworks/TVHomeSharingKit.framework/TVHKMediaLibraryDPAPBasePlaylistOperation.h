/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@interface TVHKMediaLibraryDPAPBasePlaylistOperation : TVHKMediaLibraryRequestOperation {

	unsigned _basePlaylistID;
	unsigned long long _basePlaylistPersistentID;

}

@property (assign,nonatomic) unsigned basePlaylistID;                                  //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistPersistentID;              //@synthesize basePlaylistPersistentID=_basePlaylistPersistentID - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(unsigned)basePlaylistID;
-(void)setBasePlaylistID:(unsigned)arg1 ;
-(void)setBasePlaylistPersistentID:(unsigned long long)arg1 ;
-(id)initWithSessionState:(id)arg1 requestSession:(id)arg2 ;
-(unsigned long long)basePlaylistPersistentID;
@end

