//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLResourceIdentity;

@protocol CPLEngineResourceStorageImplementation <CPLEngineStorageImplementation>
- (_Bool)resetWithError:(id *)arg1;
- (unsigned long long)totalOriginalResourceSize;
- (unsigned long long)totalResourceSize;
- (void)enumerateIdentitiesWithBlock:(void (^)(CPLResourceIdentity *, _Bool *))arg1;
- (unsigned long long)retainCountForIdentity:(CPLResourceIdentity *)arg1;
- (_Bool)releaseIdentity:(CPLResourceIdentity *)arg1 lastReference:(_Bool *)arg2 isTrackedOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)retainIdentity:(CPLResourceIdentity *)arg1 isTrackedOriginal:(_Bool)arg2 error:(id *)arg3;
@end

