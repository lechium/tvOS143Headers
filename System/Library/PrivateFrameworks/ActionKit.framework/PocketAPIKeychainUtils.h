/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PocketAPIKeychainUtils : NSObject
+(id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
+(BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
@end

