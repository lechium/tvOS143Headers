/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>

@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>
+(id)defaultPropertiesToLoad;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URL;
-(id)UUID;
-(void)setURL:(id)arg1 ;
-(id)url;
-(id)comment;
-(id)phoneNumber;
-(id)displayName;
-(id)firstName;
-(id)lastName;
-(void)setPhoneNumber:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)emailAddress;
-(void)setEmailAddress:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)owner;
-(id)semanticIdentifier;
-(void)setDisplayNameRaw:(id)arg1 ;
-(id)displayNameRaw;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)invitedBy;
-(int)proposedStartDateStatus;
@end

