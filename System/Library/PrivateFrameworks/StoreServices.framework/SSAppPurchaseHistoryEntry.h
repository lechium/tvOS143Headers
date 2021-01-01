/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predicateForAccountIdentifier:(id)arg1 ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(BOOL)arg1 ;
+(id)predicateForNotFirstParty;
+(id)predicateForHasMessagesExtension;
+(id)predicateForIs32BitOnly:(BOOL)arg1 ;
@end
