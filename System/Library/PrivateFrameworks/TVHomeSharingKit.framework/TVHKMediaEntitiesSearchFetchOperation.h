/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVHKMediaEntitiesSearchFetchResponse, NSError, TVHKMediaServerIdentifier, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, NSOperation, NSDictionary, TVHKMediaEntitiesFetchResponse;

@interface TVHKMediaEntitiesSearchFetchOperation : TVHKAsynchronousOperation {

	TVHKMediaEntitiesSearchFetchResponse* _response;
	NSError* _error;
	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	unsigned long long _fromRevision;
	unsigned long long _toRevision;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;
	unsigned long long _databaseID;
	unsigned long long _basePlaylistID;
	NSOperation* _currentSubOperation;
	NSDictionary* _mediaCategoryByAlbumPersistentID;
	NSDictionary* _mediaCategoryByAlbumArtistPersistentID;
	TVHKMediaEntitiesFetchResponse* _mediaItemsResponse;
	TVHKMediaEntitiesFetchResponse* _albumsResponse;
	TVHKMediaEntitiesFetchResponse* _albumArtistsResponse;

}

@property (nonatomic,copy) TVHKMediaServerIdentifier * mediaServerIdentifier;                    //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long fromRevision;                                    //@synthesize fromRevision=_fromRevision - In the implementation block
@property (assign,nonatomic) unsigned long long toRevision;                                      //@synthesize toRevision=_toRevision - In the implementation block
@property (nonatomic,copy) TVHKMediaLibrarySessionState * sessionState;                          //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryRequestSession * requestSession;                    //@synthesize requestSession=_requestSession - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistID;                                  //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                                  //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaCategoryByAlbumPersistentID;                    //@synthesize mediaCategoryByAlbumPersistentID=_mediaCategoryByAlbumPersistentID - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaCategoryByAlbumArtistPersistentID;              //@synthesize mediaCategoryByAlbumArtistPersistentID=_mediaCategoryByAlbumArtistPersistentID - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * mediaItemsResponse;                //@synthesize mediaItemsResponse=_mediaItemsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * albumsResponse;                    //@synthesize albumsResponse=_albumsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchResponse * albumArtistsResponse;              //@synthesize albumArtistsResponse=_albumArtistsResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesSearchFetchResponse * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                      //@synthesize error=_error - In the implementation block
+(id)new;
+(id)_mediaItemProperties;
+(id)_mediaEntityCollectionProperties;
+(void)_updateMediaCategoryDictionary:(id)arg1 withMediaItem:(id)arg2 forMediaEntityCollectionType:(unsigned long long)arg3 ;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setResponse:(TVHKMediaEntitiesSearchFetchResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaEntitiesSearchFetchResponse *)response;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setSessionState:(TVHKMediaLibrarySessionState *)arg1 ;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(void)executionDidBegin;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(unsigned long long)toRevision;
-(unsigned long long)fromRevision;
-(unsigned long long)basePlaylistID;
-(void)setBasePlaylistID:(unsigned long long)arg1 ;
-(void)_startMediaItemsFetchOperation;
-(void)setFromRevision:(unsigned long long)arg1 ;
-(void)setToRevision:(unsigned long long)arg1 ;
-(void)setMediaItemsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(void)_startAlbumsFetchOperation;
-(void)_finishExecution;
-(void)_startSubOperation:(id)arg1 ;
-(NSDictionary *)mediaCategoryByAlbumPersistentID;
-(void)setAlbumsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(void)_startAlbumArtistsFetchOperation;
-(NSDictionary *)mediaCategoryByAlbumArtistPersistentID;
-(void)setAlbumArtistsResponse:(TVHKMediaEntitiesFetchResponse *)arg1 ;
-(void)_populateMediaCategoryDictionaries;
-(TVHKMediaEntitiesFetchResponse *)mediaItemsResponse;
-(void)setMediaCategoryByAlbumPersistentID:(NSDictionary *)arg1 ;
-(void)setMediaCategoryByAlbumArtistPersistentID:(NSDictionary *)arg1 ;
-(TVHKMediaEntitiesFetchResponse *)albumsResponse;
-(TVHKMediaEntitiesFetchResponse *)albumArtistsResponse;
-(id)initWithMediaServerIdentifier:(id)arg1 fromRevision:(unsigned long long)arg2 toRevision:(unsigned long long)arg3 sessionState:(id)arg4 requestSession:(id)arg5 ;
-(void)setMediaServerIdentifier:(TVHKMediaServerIdentifier *)arg1 ;
-(void)setRequestSession:(TVHKMediaLibraryRequestSession *)arg1 ;
@end

