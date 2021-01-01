/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSArray, NSMutableDictionary;

@interface UAPasteboardGeneration : NSObject {

	unsigned long long _generation;
	NSSet* _allTypes;
	NSArray* _items;
	NSMutableDictionary* _typePaths;

}

@property (copy) NSSet * allTypes;                               //@synthesize allTypes=_allTypes - In the implementation block
@property (copy) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (retain) NSMutableDictionary * typePaths;              //@synthesize typePaths=_typePaths - In the implementation block
@property (readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
-(unsigned long long)generation;
-(NSArray *)items;
-(BOOL)addItem:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(NSSet *)allTypes;
-(BOOL)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithGeneration:(unsigned long long)arg1 ;
-(id)getTypePaths;
-(void)setAllTypes:(NSSet *)arg1 ;
-(void)setTypePaths:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)typePaths;
-(void)fetchTypeURL:(id)arg1 ;
@end
