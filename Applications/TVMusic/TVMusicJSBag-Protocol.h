//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol TVMusicJSBag <JSExport>
@property(copy, nonatomic) NSDictionary *bagOptions;
@property(readonly, nonatomic) NSArray *supportedTypes;
- (NSArray *)getArray:(NSString *)arg1;
- (NSString *)getValue:(NSString *)arg1:(NSString *)arg2;
- (_Bool)registerKeys:(NSDictionary *)arg1;
@end

