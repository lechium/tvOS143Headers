/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNFavoritesLogger <NSObject>
@required
-(void)readingFavorites:(/*^block*/id)arg1;
-(void)writingFavorites:(/*^block*/id)arg1;
-(void)rematchingFavorites:(/*^block*/id)arg1;
-(void)finishedReadingRemoteFavorites;
-(void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
-(void)finishedWritingRemoteFavorites;
-(void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
-(void)failedToReadRemoteFavorites:(id)arg1;
-(void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
-(void)failedToConvertFavoritesToPropertyList:(id)arg1;
-(void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
-(void)failedToWriteRemoteFavorites:(id)arg1;
-(void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
-(void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
-(void)reportFavoritesAccessedBeforeFirstUnlock;

@end

