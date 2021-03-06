//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWebServiceConnectionTask.h"

@class NSDate, NSString;

@interface PDGetSerialNumbersTask : PDWebServiceConnectionTask
{
    NSString *_lastUpdatedTag;	// 16 = 0x10
    NSDate *_tagLastUpdateDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010017a938
+ (id)taskWithWebService:(id)arg1 lastUpdatedTag:(id)arg2 tagLastUpdateDate:(id)arg3;	// IMP=0x000000010017a7bc
- (void).cxx_destruct;	// IMP=0x000000010017b4d8
@property(retain, nonatomic) NSDate *tagLastUpdateDate; // @synthesize tagLastUpdateDate=_tagLastUpdateDate;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x000000010017b21c
- (_Bool)_matchesGetSerialNumbersTask:(id)arg1;	// IMP=0x000000010017b0cc
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x000000010017b0a4
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x000000010017b07c
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x000000010017b044
- (id)description;	// IMP=0x000000010017af2c
- (void)handleError:(id)arg1;	// IMP=0x000000010017aef8
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000010017ad2c
- (id)queryFields;	// IMP=0x000000010017acb4
- (id)endpointComponents;	// IMP=0x000000010017ab94
- (id)method;	// IMP=0x000000010017ab88
- (_Bool)isValid;	// IMP=0x000000010017aae8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010017aa3c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010017a940
- (id)initWithWebService:(id)arg1 lastUpdatedTag:(id)arg2 tagLastUpdateDate:(id)arg3;	// IMP=0x000000010017a84c

@end

