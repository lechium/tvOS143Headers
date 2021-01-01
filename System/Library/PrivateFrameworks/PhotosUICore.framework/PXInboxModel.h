/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString, NSArray;


@protocol PXInboxModel <NSObject,NSCopying>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long inboxModelType; 
@property (nonatomic,copy,readonly) NSString * inboxModelTitle; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,copy,readonly) NSArray * senderNames; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (assign,getter=isSeen,nonatomic) BOOL seen; 
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp; 
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
@optional
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(NSString *)ownerEmail;
-(void)fetchLeftPreviewItemsWithCompletion:(/*^block*/id)arg1;
-(NSArray *)assetsForOneUp;
-(NSString *)keyCommentGUID;

@required
-(NSDate *)creationDate;
-(BOOL)userIsSender;
-(unsigned long long)assetsCount;
-(long long)inboxModelType;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(BOOL)isSeen;
-(void)setSeen:(BOOL)arg1;
-(NSArray *)leftPreviewItems;

@end
