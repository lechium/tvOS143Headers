//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSPredicate, NSSet;
@protocol LibraryCatalogObserver;

@protocol LibraryCatalog <NSObject>
@property __weak id <LibraryCatalogObserver> observer;
- (void)executeQuery:(NSPredicate *)arg1 excludingBundleIDs:(NSSet *)arg2 usingBlock:(void (^)(NSArray *, NSError *))arg3;
@end

