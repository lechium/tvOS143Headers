//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSourceAndDestination-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionCopyContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination>
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x0000000100014164
- (void).cxx_destruct;	// IMP=0x0000000100013998
- (_Bool)performWithError:(id *)arg1;	// IMP=0x0000000100013774
- (id)description;	// IMP=0x00000001000136a0
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x0000000100013594

@end

