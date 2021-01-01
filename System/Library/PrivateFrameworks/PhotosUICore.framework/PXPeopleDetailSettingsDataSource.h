/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXPeopleDetailSettingsDataSource <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasMoreDetails; 
@property (nonatomic,readonly) long long action; 
@optional
-(id)personNameAtIndex:(long long)arg1;
-(unsigned long long)faceCount:(long long)arg1;
-(long long)verifyTypeAtIndex:(long long)arg1;
-(id)modelObjectForIndex:(long long)arg1;

@required
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(long long)action;
-(unsigned long long)numberOfItems;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(BOOL)hasMoreDetails;

@end
