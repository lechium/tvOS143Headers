/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol IKNetworkRequestLoader <NSObject>
@property (nonatomic,copy) NSString * parentIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(id)arg1;
-(id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;

@end

