//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletSubcredential : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x00000001001ba4cc
+ (id)_propertySetters;	// IMP=0x00000001001b9fa4
+ (id)_predicateForAppletSubcredentialWithPairedReaderIdentifier:(id)arg1;	// IMP=0x00000001001b9f84
+ (id)_predicateForAppletSubcredentialWithPaymentApplicationPID:(long long)arg1;	// IMP=0x00000001001b9f10
+ (id)_predicateForAppletSubcredentialIdentifier:(id)arg1;	// IMP=0x00000001001b9ef0
+ (id)_predicateForAppletSubcredentialPID:(long long)arg1;	// IMP=0x00000001001b9e7c
+ (id)dictionaryFromAppletSubcredential:(id)arg1 paymentApplication:(id)arg2;	// IMP=0x00000001001b9488
+ (id)setAppletSubcredentials:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b8c60
+ (id)insertOrUpdateAppletSubcredential:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b8b54
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00000001001b8aa8
+ (id)appletSubcredentialWithPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b8a18
+ (id)appletSubcredentialsWithPairedReaderIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b87f4
+ (id)appletSubcredentialWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b8750
+ (id)appletSubcredentialsInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00000001001b8508
+ (id)credentialIdentifiersForAidInDatabase:(id)arg1;	// IMP=0x00000001001b8304
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001b9df4
- (long long)paymentApplicationPID;	// IMP=0x00000001001b9da0
- (id)appletSubcredential;	// IMP=0x00000001001b9a94
- (void)updateWithAppletSubcredential:(id)arg1 paymentApplication:(id)arg2;	// IMP=0x00000001001b9924
- (id)initWithAppletSubcredential:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b90e4

@end

