/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryOperation.h>

@class NSArray, TVHKMediaCategoryTypesFetchControllerResult;

@interface TVHKMediaCategoryTypesFetchControllerOperation : TVHKMediaLibraryOperation {

	long long _queryReason;
	NSArray* _currentMediaCategoryTypes;
	TVHKMediaCategoryTypesFetchControllerResult* _result;

}

@property (assign,nonatomic) long long queryReason;                                             //@synthesize queryReason=_queryReason - In the implementation block
@property (nonatomic,retain) TVHKMediaCategoryTypesFetchControllerResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSArray * currentMediaCategoryTypes;                                 //@synthesize currentMediaCategoryTypes=_currentMediaCategoryTypes - In the implementation block
+(id)_changeSetFromMediaCategoryTypes:(id)arg1 toMediaCategoryTypes:(id)arg2 ;
-(TVHKMediaCategoryTypesFetchControllerResult *)result;
-(void)setResult:(TVHKMediaCategoryTypesFetchControllerResult *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 ;
-(long long)queryReason;
-(void)setQueryReason:(long long)arg1 ;
-(NSArray *)currentMediaCategoryTypes;
-(id)initWithMediaLibrary:(id)arg1 queryReason:(long long)arg2 ;
-(void)setCurrentMediaCategoryTypes:(NSArray *)arg1 ;
@end
