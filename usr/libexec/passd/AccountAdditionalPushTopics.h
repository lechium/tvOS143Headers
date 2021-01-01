//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountAdditionalPushTopics : SQLiteEntity
{
}

+ (id)_propertySettersForAccountAdditionalPushTopics;	// IMP=0x0000000100081ed8
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0000000100081e64
+ (void)updateAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100081c2c
+ (void)deleteAccountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100081b8c
+ (id)insertAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100081b10
+ (id)accountAdditionalPushTopicsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000818b0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100081878
+ (id)databaseTable;	// IMP=0x000000010008186c
- (id)accountAdditionalPushTopics;	// IMP=0x0000000100082038
- (void)updateWithAccountAdditionalPushTopics:(id)arg1;	// IMP=0x0000000100081d28
- (id)initWithAccountAdditionalPushTopics:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100081964

@end

