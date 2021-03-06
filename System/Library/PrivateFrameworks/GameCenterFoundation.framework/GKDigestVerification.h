/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKDigestVerification : NSObject
+(id)computeVerificationHashForDigest:(id)arg1 ;
+(BOOL)digest:(id)arg1 matchesHash:(id)arg2 ;
+(id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
+(id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4 ;
@end

