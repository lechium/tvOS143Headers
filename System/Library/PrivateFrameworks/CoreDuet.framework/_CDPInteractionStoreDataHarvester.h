/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSMutableDictionary, _CDInteractionStore, NSPredicate, NSArray, NSString;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {

	NSMutableDictionary* _identifierToContactMap;
	_CDInteractionStore* _store;
	NSPredicate* _predicate;
	NSArray* _interactions;

}

@property (nonatomic,retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * interactions;                 //@synthesize interactions=_interactions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(NSArray *)interactions;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactForIdentifier:(id)arg1 ;
@end

