//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKKSSQLWhereColumn : NSObject
{
    unsigned long long _sqlOp;	// 8 = 0x8
    unsigned long long _columnName;	// 16 = 0x10
}

+ (id)op:(unsigned long long)arg1 column:(unsigned long long)arg2;	// IMP=0x000000010002c6a8
@property unsigned long long columnName; // @synthesize columnName=_columnName;
@property unsigned long long sqlOp; // @synthesize sqlOp=_sqlOp;
- (id)initWithOperation:(unsigned long long)arg1 columnName:(unsigned long long)arg2;	// IMP=0x000000010002c63c

@end

