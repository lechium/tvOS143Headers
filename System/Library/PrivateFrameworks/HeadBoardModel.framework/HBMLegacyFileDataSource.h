/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardModel/HeadBoardModel-Structs.h>
#import <HeadBoardModel/HBMFileDataSource.h>
#import <libobjc.A.dylib/HBMDataSource.h>

@class HBMStoreCollection, NSString;

@interface HBMLegacyFileDataSource : HBMFileDataSource <HBMDataSource> {

	os_unfair_lock_s _lock;
	HBMStoreCollection* _collection;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic,__weak) id<HBMDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) HBMStoreCollection * collection;                 //@synthesize collection=_collection - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(os_unfair_lock_s)lock;
-(HBMStoreCollection *)collection;
-(void)presentedItemDidChange;
-(BOOL)load:(id*)arg1 ;
-(BOOL)isReadOnly;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end

