/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(void)removeItem:(id)arg1;
-(NSArray *)itemIdentifiers;
-(NSString *)sectionIdentifier;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToHead:(id)arg1;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)moveItemToTail:(id)arg1;
-(void)updateSection;
-(void)updateItem:(id)arg1;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;

@end

