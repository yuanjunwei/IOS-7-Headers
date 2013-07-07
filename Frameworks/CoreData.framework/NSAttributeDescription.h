/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSPropertyDescription.h>

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription
{
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    unsigned int _type;
    NSString *_attributeValueClassName;
    struct __attributeDescriptionFlags {
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _reservedAttributeDescription:29;
    } _attributeDescriptionFlags;
    id _defaultValue;
}

+ (id)_classNameForType:(unsigned int)arg1;
+ (void)initialize;
- (void)setAllowsExternalBinaryDataStorage:(BOOL)arg1;
- (BOOL)allowsExternalBinaryDataStorage;
- (id)validationWarnings;
- (id)validationPredicates;
- (id)versionHash;
- (void)setValueTransformerName:(id)arg1;
- (id)valueTransformerName;
- (BOOL)isIndexed;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)setAttributeType:(unsigned int)arg1;
- (unsigned int)attributeType;
- (void)setAttributeValueClassName:(id)arg1;
- (id)attributeValueClassName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2 withClassName:(id)arg3;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)setStoresBinaryDataExternally:(BOOL)arg1;
- (BOOL)storesBinaryDataExternally;
- (unsigned int)_propertyType;
- (Class)_attributeValueClass;
- (id)_initWithType:(unsigned int)arg1;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (BOOL)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_createCachesAndOptimizeState;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;

@end
