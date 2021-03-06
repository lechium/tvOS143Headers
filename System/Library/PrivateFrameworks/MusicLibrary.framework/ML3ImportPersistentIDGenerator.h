/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {

	NSMutableDictionary* _pregeneratedIdMappings;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(void)addIdMapping:(id)arg1 forProperty:(unsigned)arg2 ;
-(long long)nextPersistentIDForImportItem:(shared_ptr<ML3ImportItem>*)arg1 ;
-(void)removePersistentIDFromIdMapping:(long long)arg1 ;
@end

