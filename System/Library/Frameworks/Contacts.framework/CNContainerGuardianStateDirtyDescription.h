/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContainerPropertyDescription.h>

@interface CNContainerGuardianStateDirtyDescription : CNContainerPropertyDescription
-(id)key;
-(Class)valueClass;
-(BOOL)isWritable;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(int)abPropertyID;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
@end

