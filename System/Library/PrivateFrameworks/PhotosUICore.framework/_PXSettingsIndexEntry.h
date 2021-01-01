/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexPath, NSString;

@interface _PXSettingsIndexEntry : NSObject {

	_PXSettingsIndexEntry* _parentEntry;
	NSIndexPath* _indexPath;
	NSString* _sectionTitle;
	NSString* _rowTitle;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * sectionTitle;                               //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) NSString * rowTitle;                                   //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (assign,nonatomic,__weak) _PXSettingsIndexEntry * parentEntry;              //@synthesize parentEntry=_parentEntry - In the implementation block
+(id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
+(id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(NSIndexPath *)indexPath;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)sectionTitle;
-(_PXSettingsIndexEntry *)parentEntry;
-(void)setParentEntry:(_PXSettingsIndexEntry *)arg1 ;
-(NSString *)rowTitle;
-(id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(BOOL)matchesSearchString:(id)arg1 ;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_revealInSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_revealInTopOfSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

