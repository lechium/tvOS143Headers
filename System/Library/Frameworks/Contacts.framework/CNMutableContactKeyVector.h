/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector
+(id)new;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)freeze;
-(void)addKey:(id)arg1 ;
-(void)unionKeyVector:(id)arg1 ;
-(id)initWithKeyVector:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(void)minusKeyVector:(id)arg1 ;
-(void)intersectKeyVector:(id)arg1 ;
-(void)subtractKey:(id)arg1 ;
-(void)subtractKeys:(id)arg1 ;
@end
