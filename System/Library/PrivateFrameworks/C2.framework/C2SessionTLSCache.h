/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2SessionDelegate.h>

@class C2Session, NSString;

@interface C2SessionTLSCache : NSObject <C2SessionDelegate> {

	C2Session* _pinnedSession;
	C2Session* _unpinnedSession;

}

@property (nonatomic,retain) C2Session * pinnedSession;                //@synthesize pinnedSession=_pinnedSession - In the implementation block
@property (nonatomic,retain) C2Session * unpinnedSession;              //@synthesize unpinnedSession=_unpinnedSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)sessionForOptions:(id)arg1 ;
-(C2Session *)pinnedSession;
-(void)setPinnedSession:(C2Session *)arg1 ;
-(C2Session *)unpinnedSession;
-(void)setUnpinnedSession:(C2Session *)arg1 ;
-(id)_createSessionWithTLSPinning:(BOOL)arg1 ;
-(id)underlyingDelegateQueue;
-(void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3 ;
@end

