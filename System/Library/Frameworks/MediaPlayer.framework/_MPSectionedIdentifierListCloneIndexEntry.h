/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject {

	MPSectionedIdentifierListItemEntry* _rootEntry;
	NSMutableSet* _clonedEntries;

}

@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * rootEntry;              //@synthesize rootEntry=_rootEntry - In the implementation block
@property (nonatomic,retain) NSMutableSet * clonedEntries;                                //@synthesize clonedEntries=_clonedEntries - In the implementation block
-(id)init;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
-(void)setRootEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(NSMutableSet *)clonedEntries;
-(void)setClonedEntries:(NSMutableSet *)arg1 ;
@end

