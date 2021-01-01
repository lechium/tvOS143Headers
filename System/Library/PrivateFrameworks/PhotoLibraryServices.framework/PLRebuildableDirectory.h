/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, PLPhotoLibrary, NSFileManager;

@interface PLRebuildableDirectory : NSObject {

	BOOL _isCPLAssets;
	BOOL _isPhotoStream;
	NSURL* _url;
	PLPhotoLibrary* _photoLibrary;
	NSFileManager* _fm;
	double _startTime;

}

@property (readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (readonly) BOOL isCPLAssets;                           //@synthesize isCPLAssets=_isCPLAssets - In the implementation block
@property (readonly) BOOL isPhotoStream;                         //@synthesize isPhotoStream=_isPhotoStream - In the implementation block
@property (readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) NSFileManager * fm;                         //@synthesize fm=_fm - In the implementation block
@property (readonly) double startTime;                           //@synthesize startTime=_startTime - In the implementation block
+(void)collectFileURLs:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 testCreationDates:(BOOL)arg6 startTime:(double)arg7 pathManager:(id)arg8 ;
+(id)rebuildableDirectoryWithURL:(id)arg1 isCPLAssets:(BOOL)arg2 isPhotoStream:(BOOL)arg3 photoLibrary:(id)arg4 startTime:(double)arg5 ;
-(id)debugDescription;
-(id)description;
-(double)startTime;
-(NSURL *)url;
-(PLPhotoLibrary *)photoLibrary;
-(void)gatherAssetsToImport:(id)arg1 pendingAssetsCount:(unsigned long long*)arg2 onDiskURLsToSkip:(id)arg3 cameraRollOnly:(BOOL)arg4 ;
-(void)_collectContentsOfDirectoryURL:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 startTime:(double)arg6 ;
-(BOOL)isCPLAssets;
-(BOOL)isPhotoStream;
-(NSFileManager *)fm;
@end

