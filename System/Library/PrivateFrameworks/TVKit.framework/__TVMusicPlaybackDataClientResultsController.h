/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/__TVMusicDataClientResultsController.h>

@class TVCKDataCollection, NSString;

@interface __TVMusicPlaybackDataClientResultsController : __TVMusicDataClientResultsController {

	TVCKDataCollection* _album;
	TVCKDataCollection* _artistOrComposer;
	BOOL _isComposer;
	NSString* _genreName;

}
-(id)queryForController:(id)arg1 ;
-(id)initWithArtist:(id)arg1 genre:(id)arg2 ;
-(id)initWithAlbum:(id)arg1 genre:(id)arg2 ;
-(id)initWithComposer:(id)arg1 genre:(id)arg2 ;
@end

