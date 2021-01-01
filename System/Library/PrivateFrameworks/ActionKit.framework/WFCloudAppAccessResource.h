/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFAccountAccessResource.h>

@interface WFCloudAppAccessResource : WFAccountAccessResource
+(void)getAccountWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
+(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)name;
-(id)icon;
-(id)accounts;
-(Class)accountClass;
@end

