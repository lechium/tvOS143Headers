/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface CNUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _os_unfair_lock;

}
-(id)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
-(void)assertCurrentThreadIsOwner;
-(void)assertCurrentThreadIsNotOwner;
@end

