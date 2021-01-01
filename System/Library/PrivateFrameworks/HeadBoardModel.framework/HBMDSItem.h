/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol HBMDSItem <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double orderID; 
@property (nonatomic,readonly) unsigned long long itemType; 
@required
-(NSString *)identifier;
-(unsigned long long)itemType;
-(double)orderID;

@end
