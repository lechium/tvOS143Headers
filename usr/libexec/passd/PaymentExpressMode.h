//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentExpressMode : SQLiteEntity
{
}

+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x0000000100156178
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x0000000100156110
+ (id)insertExpressModes:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100155f0c
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0000000100155e70
+ (id)_expressModesInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x0000000100155cd8
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x0000000100155c48
+ (id)expressModesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0000000100155bbc
+ (id)databaseTable;	// IMP=0x0000000100155bb0
- (id)expressMode;	// IMP=0x0000000100156368
- (id)initWithExpressMode:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x00000001001561ec

@end

