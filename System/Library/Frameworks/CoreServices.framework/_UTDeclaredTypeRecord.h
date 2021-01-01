/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {

	LSBundleRecord* _weakDeclaringBundleRecord;

}

@property (readonly) unsigned _rawFlags; 
@property (readonly) LSBundleRecord * _declaringBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)identifier;
-(id)version;
-(id)_localizedDescription;
-(BOOL)isActive;
-(BOOL)isDynamic;
-(BOOL)isWildcard;
-(id)referenceURL;
-(BOOL)isImported;
-(id)tagSpecification;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(id)parentTypeIdentifiers;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)isInPublicDomain;
-(BOOL)isExported;
-(BOOL)isCoreType;
-(id)declaringBundleRecord;
-(id)declaration;
-(id)pedigree;
-(id)childTypeIdentifiers;
-(id)_declaringBundleBookmark;
-(id)_delegatePath;
-(unsigned)_rawFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(unsigned)_rawFlags;
-(id)_declaringBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(LSBundleRecord *)_declaringBundleRecord;
-(id)declarationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)tagSpecificationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)referenceURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)parentTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)childTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_localizedDescriptionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_declaringBundleBookmarkWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_delegatePathWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypeStructuresWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(void)_LSRecord_resolve__rawFlags;
-(void)_LSRecord_resolve__declaringBundleRecord;
-(void)_LSRecord_resolve_declaration;
-(void)_LSRecord_resolve_tagSpecification;
-(void)_LSRecord_resolve_referenceURL;
-(void)_LSRecord_resolve_pedigree;
-(void)_LSRecord_resolve_parentTypeIdentifiers;
-(void)_LSRecord_resolve_childTypeIdentifiers;
-(void)_LSRecord_resolve__localizedDescription;
-(void)_LSRecord_resolve__declaringBundleBookmark;
-(void)_LSRecord_resolve__delegatePath;
-(id)identifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)versionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_identifier;
-(void)_LSRecord_resolve_version;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(BOOL)isDeclared;
@end
