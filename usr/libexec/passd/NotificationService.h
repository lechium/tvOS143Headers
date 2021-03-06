//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface NotificationService : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x0000000100097c78
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x0000000100097c58
+ (id)_predicateForNoRegistrationURL;	// IMP=0x0000000100097c3c
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x0000000100097bd4
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x0000000100097b6c
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x0000000100097af8
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x0000000100097ad8
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001000978c8
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x0000000100097200
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x0000000100097174
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x0000000100097164
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x0000000100096f64
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x0000000100096df8
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x0000000100096d6c
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0000000100096c8c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100096c54
+ (id)databaseTable;	// IMP=0x0000000100096c48
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x00000001000976d8
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x0000000100097604
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x0000000100097574
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x0000000100097560
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x000000010009754c
- (void)updateWithPushToken:(id)arg1;	// IMP=0x0000000100097538
- (id)notificationService;	// IMP=0x0000000100097400
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0000000100096a8c

@end

