/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSUUID *)uuid;
-(void)setUuid:(id)arg1;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;

@end

