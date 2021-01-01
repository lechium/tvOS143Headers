//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVServices/TVSAsynchronousOperation.h>

@class NSError, NSObject, NSString, TVTopShelfContentExtensionAttributes;
@protocol OS_dispatch_queue, TVTopShelfContent, TVTopShelfContentExtensionControlling;

@interface HBTopShelfFetchContentOperation : TVSAsynchronousOperation
{
    _Bool _fetchAttributes;	// 8 = 0x8
    NSString *_fetchIdentifier;	// 16 = 0x10
    id <TVTopShelfContentExtensionControlling> _contentExtensionController;	// 24 = 0x18
    unsigned long long _fetchTimeoutInSeconds;	// 32 = 0x20
    id <TVTopShelfContent> _content;	// 40 = 0x28
    TVTopShelfContentExtensionAttributes *_attributes;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSString *_applicationIdentifier;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_processingQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002cef0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVTopShelfContentExtensionAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) id <TVTopShelfContent> content; // @synthesize content=_content;
@property(nonatomic) _Bool fetchAttributes; // @synthesize fetchAttributes=_fetchAttributes;
@property(nonatomic) unsigned long long fetchTimeoutInSeconds; // @synthesize fetchTimeoutInSeconds=_fetchTimeoutInSeconds;
@property(readonly, nonatomic) id <TVTopShelfContentExtensionControlling> contentExtensionController; // @synthesize contentExtensionController=_contentExtensionController;
@property(readonly, copy, nonatomic) NSString *fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
- (id)description;	// IMP=0x000000010002cd34
- (void)cancel;	// IMP=0x000000010002cc28
- (void)_executionDidBegin;	// IMP=0x000000010002c4ec
- (id)initWithApplicationIdentifier:(id)arg1 fetchIdentifier:(id)arg2 contentExtensionController:(id)arg3;	// IMP=0x000000010002c3e8

@end

